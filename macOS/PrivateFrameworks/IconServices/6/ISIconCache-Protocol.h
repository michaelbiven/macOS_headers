//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISGenerationRequest, ISImage, ISStore, ISStoreIndex;

@protocol ISIconCache <NSObject>
@property(readonly) ISStore *store;
@property(readonly) ISStoreIndex *storeIndex;
- (void)generateImageWithRequest:(ISGenerationRequest *)arg1 completion:(void (^)(ISImage *))arg2;
- (ISImage *)generateImageWithRequest:(ISGenerationRequest *)arg1;
@end

