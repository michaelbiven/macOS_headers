//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView;

@protocol VisualTabPickerThumbnailSnapshotProviding <NSObject>
@property(readonly, nonatomic) BOOL visualTabPickerThumbnailContentViewWasShownInWindow;
@property(readonly, nonatomic) long long visualTabPickerThumbnailContentViewType;
@property(readonly, nonatomic) struct CGRect visualTabPickerThumbnailContentViewVisibleBounds;
@property(readonly, nonatomic) NSView *visualTabPickerThumbnailContentView;
- (void)willShowVisualTabPickerThumbnailContentView;
@end

