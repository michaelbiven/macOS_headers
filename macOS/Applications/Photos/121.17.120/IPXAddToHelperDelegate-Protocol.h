//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXAddToHelper, IPXSelectionContainer, PHAssetCollection;

@protocol IPXAddToHelperDelegate <NSObject>
- (BOOL)validateAddToHelperCanCreateNewAlbum:(IPXAddToHelper *)arg1;
- (void)addToHelperWantsToCreateNewAlbum:(IPXAddToHelper *)arg1;
- (void)addToHelper:(IPXAddToHelper *)arg1 wantsUserInterfaceFeedbackForAssetCollection:(PHAssetCollection *)arg2;
- (IPXSelectionContainer *)selectionContainerForAddToHelper:(IPXAddToHelper *)arg1;
@end

