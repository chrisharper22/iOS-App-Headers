//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDiscoveryGridNetworkContextProvider-Protocol.h"

@class IGAPIRequestBuilder, IGRequestPolicy, NSString;
@protocol IGDiscoveryGridNetworkParser;

@interface IGKeywordSearchGridNetworkContext : NSObject <IGDiscoveryGridNetworkContextProvider>
{
    IGAPIRequestBuilder *_builder;
    IGRequestPolicy *_policy;
    id <IGDiscoveryGridNetworkParser> _parser;
    NSString *_rankToken;
    NSString *_pinnedMediaId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *pinnedMediaId; // @synthesize pinnedMediaId=_pinnedMediaId;
@property(copy, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
- (id)parser;
- (id)policy;
- (id)urlRequestWithMaxID:(id)arg1;
- (id)initWithRequestBuilder:(id)arg1 policy:(id)arg2 parser:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
