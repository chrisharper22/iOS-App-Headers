//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedMegaphoneProvider-Protocol.h"

@class IGActivatorMegaphoneDataModel, IGGenericMegaphone, IGRUXDataModel, NSString;

@interface IGMainFeedMegaphoneProvider : NSObject <IGFeedMegaphoneProvider>
{
    IGGenericMegaphone *_serverMegaphone;
    IGActivatorMegaphoneDataModel *_activatorMegaphone;
    IGRUXDataModel *_ruxMegaphone;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGRUXDataModel *ruxMegaphone; // @synthesize ruxMegaphone=_ruxMegaphone;
@property(retain, nonatomic) IGActivatorMegaphoneDataModel *activatorMegaphone; // @synthesize activatorMegaphone=_activatorMegaphone;
@property(retain, nonatomic) IGGenericMegaphone *serverMegaphone; // @synthesize serverMegaphone=_serverMegaphone;
- (unsigned long long)displaySource;
- (void)updateServerMegaphoneWithResponse:(id)arg1;
- (id)activeRUXMegaphone;
- (id)activeActivatorMegaphone;
- (id)activeGenericMegaphones;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

