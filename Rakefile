#task :default => :install
SUPPORT_DIR = File.join(ENV['HOME'], 'Library', 'Application\ Support', 'TextMate')

desc "Update TextMate submodules"
task :update do
  puts "Updating TextMate submodules"
  cmds = ["cd #{SUPPORT_DIR}", "git submodule foreach git pull"]
  system cmds.join(' && ') unless cmds.empty?
end
