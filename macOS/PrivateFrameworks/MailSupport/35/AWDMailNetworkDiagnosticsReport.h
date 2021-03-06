//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDMailNetworkDiagnosticsReport : PBCodable <NSCopying>
{
    unsigned long long _numActiveCalls;
    unsigned long long _numBackgroundWifiClients;
    unsigned long long _timestamp;
    NSString *_dataIndicator;
    int _dataInterface;
    unsigned int _reachabilityFlags;
    BOOL _cellData;
    BOOL _dnsEnabled;
    BOOL _roamingAllowed;
    BOOL _wifiEnabled;
    struct {
        unsigned int numActiveCalls:1;
        unsigned int numBackgroundWifiClients:1;
        unsigned int timestamp:1;
        unsigned int dataInterface:1;
        unsigned int reachabilityFlags:1;
        unsigned int cellData:1;
        unsigned int dnsEnabled:1;
        unsigned int roamingAllowed:1;
        unsigned int wifiEnabled:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long numBackgroundWifiClients; // @synthesize numBackgroundWifiClients=_numBackgroundWifiClients;
@property(nonatomic) unsigned long long numActiveCalls; // @synthesize numActiveCalls=_numActiveCalls;
@property(nonatomic) BOOL roamingAllowed; // @synthesize roamingAllowed=_roamingAllowed;
@property(retain, nonatomic) NSString *dataIndicator; // @synthesize dataIndicator=_dataIndicator;
@property(nonatomic) BOOL cellData; // @synthesize cellData=_cellData;
@property(nonatomic) int dataInterface; // @synthesize dataInterface=_dataInterface;
@property(nonatomic) BOOL wifiEnabled; // @synthesize wifiEnabled=_wifiEnabled;
@property(nonatomic) BOOL dnsEnabled; // @synthesize dnsEnabled=_dnsEnabled;
@property(nonatomic) unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasNumBackgroundWifiClients;
@property(nonatomic) BOOL hasNumActiveCalls;
@property(nonatomic) BOOL hasRoamingAllowed;
@property(readonly, nonatomic) BOOL hasDataIndicator;
@property(nonatomic) BOOL hasCellData;
@property(nonatomic) BOOL hasDataInterface;
@property(nonatomic) BOOL hasWifiEnabled;
@property(nonatomic) BOOL hasDnsEnabled;
@property(nonatomic) BOOL hasReachabilityFlags;
@property(nonatomic) BOOL hasTimestamp;

@end

