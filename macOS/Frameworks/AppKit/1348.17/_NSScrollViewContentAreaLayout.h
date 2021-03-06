//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSScrollView;

@interface _NSScrollViewContentAreaLayout : NSObject
{
    NSScrollView *scrollView;
    struct CGSize contentAreaSize;
    struct CGSize documentFrameSize;
    BOOL hScrollerShown;
    BOOL vScrollerShown;
    BOOL didTrimContentAreaForHScroller;
    BOOL didTrimContentAreaForVScroller;
    struct CGSize trimmedContentAreaSize;
}

- (struct CGSize)_trimmedContentAreaSize;
- (BOOL)_didTrimContentAreaForVScroller;
- (BOOL)_didTrimContentAreaForHScroller;
- (BOOL)_vScrollerShown;
- (BOOL)_hScrollerShown;
- (void)_updateLayoutWithDocumentFrameSize:(struct CGSize)arg1;
- (void)_addVerticalScroller;
- (void)_addHorizontalScroller;
- (void)_resetLayoutWithContentAreaSize:(struct CGSize)arg1;
- (struct CGSize)_clipBoundsSize;
- (struct CGSize)_documentFrameSize;
- (id)description;
- (id)copy;
- (id)_initWithScrollView:(id)arg1;

@end

