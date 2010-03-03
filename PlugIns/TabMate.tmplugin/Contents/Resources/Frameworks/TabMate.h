#import <Cocoa/Cocoa.h>

#import "TextMateGlue.h"
#import "ModeLineParser.h"


@interface TabMate : NSObject
{
  TextMateGlue    *mGlue;
  ModeLineParser  *mParser;
}

- (id)initWithPlugInController:(id <TMPlugInController>)aController;
- (void)dealloc;

@end
