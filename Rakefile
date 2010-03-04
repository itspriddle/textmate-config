#task :default => :install
SUPPORT_DIR = File.join('Library', 'Application Support', 'TextMate')

desc "Install TextMate configs"
task :install do
  file   = File.join('Library', 'Application Support', 'TextMate')
  puts "linking ~/#{file}"

  cmds = [
    %Q{unlink "$HOME/#{SUPPORT_DIR}"},
    %Q{ln -s "$PWD/#{SUPPORT_DIR}" "$HOME/#{SUPPORT_DIR}"}
  ]

  system cmds.join(' && ')
end

desc "Update TextMate configs"
task :update do
  cmds = [].tap do |c|
    c << %Q{cd "$HOME/#{SUPPORT_DIR}"}
    c << "git pull origin master"
    c << "git submodule init"
    c << "git submodule update"
  end
  system cmds.join(' && ') unless cmds.empty?
end

