//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _GEOThrottledTicket : NSObject
{
    unsigned int qos;
    id <GEOMapServiceThrottlableTicket> ticket;
    CDUnknownBlockType submissionHandler;
    double safeTime;
}

+ (id)ticket:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(nonatomic) double safeTime; // @synthesize safeTime;
@property(nonatomic) unsigned int qos; // @synthesize qos;
@property(copy, nonatomic) CDUnknownBlockType submissionHandler; // @synthesize submissionHandler;
@property(retain, nonatomic) id <GEOMapServiceThrottlableTicket> ticket; // @synthesize ticket;

@end

