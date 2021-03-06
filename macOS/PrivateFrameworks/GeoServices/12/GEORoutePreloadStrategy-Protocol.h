//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, GEORouteMatch, GEORoutePreloader;

@protocol GEORoutePreloadStrategy <NSObject>
@property(retain, nonatomic) GEOComposedRoute *route;
@property(nonatomic) __weak GEORoutePreloader *preloader;
- (void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;
- (void)updateWithRoute:(GEOComposedRoute *)arg1 routeMatch:(GEORouteMatch *)arg2;
- (void)stop;
- (void)start;
- (void)performTearDown;
@end

