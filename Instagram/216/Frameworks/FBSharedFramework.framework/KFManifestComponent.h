//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/KFComponent.h>

@class NSMutableDictionary;

@interface KFManifestComponent : KFComponent
{
    NSMutableDictionary *_capabilityVersions;
    _Bool _requiresUnknownCapability;
}

+ (unsigned short)componentClassIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool requiresUnknownCapability; // @synthesize requiresUnknownCapability=_requiresUnknownCapability;
- (unsigned long long)requiredVersionForCapability:(unsigned long long)arg1;
- (void)setRequiredCapability:(unsigned long long)arg1 requiredVersion:(unsigned long long)arg2;
- (id)init;

@end

