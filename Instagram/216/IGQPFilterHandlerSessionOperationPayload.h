//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionPayload-Protocol.h"

@class IGQPClause, IGQPDataStore, IGQPPromotion, NSString;

@interface IGQPFilterHandlerSessionOperationPayload : NSObject <IGUserSessionPayload>
{
    IGQPClause *_clause;
    IGQPPromotion *_promotion;
    NSString *_surfaceID;
    IGQPDataStore *_dataStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak IGQPDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, nonatomic) NSString *surfaceID; // @synthesize surfaceID=_surfaceID;
@property(readonly, nonatomic) IGQPPromotion *promotion; // @synthesize promotion=_promotion;
@property(readonly, nonatomic) IGQPClause *clause; // @synthesize clause=_clause;
- (id)initWithClause:(id)arg1 promotion:(id)arg2 surfaceID:(id)arg3 dataStore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

