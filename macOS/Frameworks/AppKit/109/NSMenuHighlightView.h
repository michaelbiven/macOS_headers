//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTableView;

__attribute__((visibility("hidden")))
@interface NSMenuHighlightView : NSView
{
    NSTableView *_tableView;
}

@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)dealloc;

@end

