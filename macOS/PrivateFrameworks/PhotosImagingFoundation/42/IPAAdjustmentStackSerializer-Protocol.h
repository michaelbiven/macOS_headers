//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IPAAdjustmentStack, NSData, NSDictionary;

@protocol IPAAdjustmentStackSerializer <NSObject>
- (NSDictionary *)archiveFromData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)dataFromArchive:(NSDictionary *)arg1 error:(id *)arg2;
- (IPAAdjustmentStack *)adjustmentStackFromData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)dataFromAdjustmentStack:(IPAAdjustmentStack *)arg1 error:(id *)arg2;
@end

