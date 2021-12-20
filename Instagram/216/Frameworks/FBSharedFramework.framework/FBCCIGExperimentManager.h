//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBCCExperimentManager-Protocol.h>
#import <FBSharedFramework/OCMComponentExperimentManagerProtocol-Protocol.h>

@class IGUserSession, NSString;

@interface FBCCIGExperimentManager : NSObject <FBCCExperimentManager, OCMComponentExperimentManagerProtocol>
{
    IGUserSession *_userSession;
    unsigned long long _productName;
}

- (void).cxx_destruct;
- (id)experimentManager;
- (long long)getFeatureIntValueWithoutLogging:(unsigned long long)arg1;
- (long long)getFeatureIntValue:(unsigned long long)arg1;
- (_Bool)isFeatureEnabledWithoutLogging:(unsigned long long)arg1;
- (_Bool)isFeatureEnabled:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 productName:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
