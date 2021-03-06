//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject
{
    BOOL _shouldInterleaveClientResults;
    BOOL _enforceServerResultsOrder;
    NSArray *_results;
    NSString *_title;
}

@property(readonly, nonatomic) BOOL enforceServerResultsOrder; // @synthesize enforceServerResultsOrder=_enforceServerResultsOrder;
@property(readonly, nonatomic) BOOL shouldInterleaveClientResults; // @synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)initWithResults:(id)arg1 title:(id)arg2 shouldInterleaveClientResults:(BOOL)arg3 enforceServerResultsOrder:(BOOL)arg4;

@end

