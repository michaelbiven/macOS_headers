//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath;
@protocol PXDisplayAsset;

@protocol PXDisplayAssetDataSource <NSObject>
@property(readonly, nonatomic) unsigned long long versionIdentifier;
- (NSIndexPath *)indexPathForDisplayAsset:(id <PXDisplayAsset>)arg1 hintIndexPath:(NSIndexPath *)arg2;
- (id <PXDisplayAsset>)displayAssetAtIndexPath:(NSIndexPath *)arg1;
@end

