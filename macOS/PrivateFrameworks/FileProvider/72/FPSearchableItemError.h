//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchableItemError : PBCodable <NSCopying>
{
    long long _code;
    NSString *_customDomain;
    int _domain;
}

+ (id)errorFromString:(id)arg1;
+ (id)stringFromError:(id)arg1;
@property(retain, nonatomic) NSString *customDomain; // @synthesize customDomain=_customDomain;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) int domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCustomDomain;
- (int)StringAsDomain:(id)arg1;
- (id)domainAsString:(int)arg1;

@end

