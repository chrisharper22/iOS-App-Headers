//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGQPFilterHandlerProtocol-Protocol.h"

@class IGQPDataStore, IGQPFilterTemplateParam, IGQPPromotion, IGUserSession, NSDictionary, NSString;

@interface IGQPFilterHandler : NSObject <IGQPFilterHandlerProtocol>
{
    _Bool _passesIfNotSupported;
    IGQPPromotion *_promotion;
    NSString *_surfaceID;
    NSString *_filterType;
    IGQPFilterTemplateParam *_value;
    NSDictionary *_extraDatas;
    NSString *_unknownAction;
    IGQPDataStore *_dataStore;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak IGQPDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(readonly, copy, nonatomic) NSString *unknownAction; // @synthesize unknownAction=_unknownAction;
@property(readonly, nonatomic) _Bool passesIfNotSupported; // @synthesize passesIfNotSupported=_passesIfNotSupported;
@property(readonly, copy, nonatomic) NSDictionary *extraDatas; // @synthesize extraDatas=_extraDatas;
@property(readonly, copy, nonatomic) IGQPFilterTemplateParam *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
@property(readonly, copy, nonatomic) NSString *surfaceID; // @synthesize surfaceID=_surfaceID;
@property(readonly, nonatomic) __weak IGQPPromotion *promotion; // @synthesize promotion=_promotion;
- (id)_formatExtraDatasToDict:(id)arg1;
- (_Bool)passesFilterWithContext:(id)arg1 error:(id *)arg2;
- (id)initWithFilter:(id)arg1 promotion:(id)arg2 surfaceID:(id)arg3 dataStore:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

