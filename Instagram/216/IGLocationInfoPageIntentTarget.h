//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGInfoLinkedBusinessViewModel, IGLocation, IGLocationInfoPageModel, NSString;

@interface IGLocationInfoPageIntentTarget : NSObject <FBIntentTarget>
{
    IGLocation *_location;
    IGLocationInfoPageModel *_infoPageModel;
    IGInfoLinkedBusinessViewModel *_linkedBusinessModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGInfoLinkedBusinessViewModel *linkedBusinessModel; // @synthesize linkedBusinessModel=_linkedBusinessModel;
@property(readonly, nonatomic) IGLocationInfoPageModel *infoPageModel; // @synthesize infoPageModel=_infoPageModel;
@property(readonly, nonatomic) IGLocation *location; // @synthesize location=_location;
- (id)initWithLocation:(id)arg1 infoPageModel:(id)arg2 linkedBusinessModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

