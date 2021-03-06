//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface NSCollectionLayoutSpacing : NSObject <NSCopying>
{
    double _spacing;
    BOOL _isFlexible;
}

+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;
+ (id)defaultSpacing;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) BOOL isFixedSpacing;
@property(readonly) BOOL isFlexibleSpacing;
- (BOOL)_hasSpacing;
@property(readonly) double spacing;
- (id)description;
- (id)initWithSpacing:(double)arg1 isFlexible:(BOOL)arg2;

@end

