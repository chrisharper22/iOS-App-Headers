//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/OCMProviderResolverProtocol-Protocol.h>

@class NSString;

@interface OCMPluginProviderResolver : NSObject <OCMProviderResolverProtocol>
{
}

- (id)allKeys;
- (CDUnknownBlockType)resolveProviderForKey:(id)arg1 configurationContext:(id)arg2 shouldMemoize:(_Bool *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

