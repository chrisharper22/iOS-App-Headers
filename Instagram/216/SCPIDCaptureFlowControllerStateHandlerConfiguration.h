//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@protocol SCPPermissionsHandling;

@interface SCPIDCaptureFlowControllerStateHandlerConfiguration : NSObject <NSCopying>
{
    _Bool _needsIDTypeSelection;
    _Bool _needsOnboarding;
    unsigned long long _featureLevel;
    long long _flow;
    id <SCPPermissionsHandling> _permissionsHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCPPermissionsHandling> permissionsHandler; // @synthesize permissionsHandler=_permissionsHandler;
@property(readonly, nonatomic) _Bool needsOnboarding; // @synthesize needsOnboarding=_needsOnboarding;
@property(readonly, nonatomic) _Bool needsIDTypeSelection; // @synthesize needsIDTypeSelection=_needsIDTypeSelection;
@property(readonly, nonatomic) long long flow; // @synthesize flow=_flow;
@property(readonly, nonatomic) unsigned long long featureLevel; // @synthesize featureLevel=_featureLevel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeatureLevel:(unsigned long long)arg1 flow:(long long)arg2 needsIDTypeSelection:(_Bool)arg3 needsOnboarding:(_Bool)arg4 permissionsHandler:(id)arg5;

@end

