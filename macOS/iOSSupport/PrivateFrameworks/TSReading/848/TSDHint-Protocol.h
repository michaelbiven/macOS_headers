//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSKSelection;
@protocol TSDHint;

@protocol TSDHint <NSObject>
+ (Class)archivedHintClass;
- (id <TSDHint>)copyForArchiving;
- (id <TSDHint>)lastChildHint;
- (id <TSDHint>)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelection:(TSKSelection *)arg1;

@optional
- (struct CGSize)effectiveSize;
- (struct CGSize)maximumSize;
- (BOOL)isFirstHint;
@end

