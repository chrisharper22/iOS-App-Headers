//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGRequestPolicy, NSMutableArray, NSMutableDictionary;
@protocol IGAPIClient, IGUserLauncherSetProviding;

@interface THAudioTranscriptionService : NSObject <IGUserSessionEndingObject>
{
    id <IGAPIClient> _networker;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    IGRequestPolicy *_policy;
    NSMutableDictionary *_uploadTokensById;
    NSMutableArray *_debugTranscriptionDictionaries;
}

- (void).cxx_destruct;
- (void)userSessionWillEnd;
- (id)debugTranscriptionDictionaries;
- (id)transcribeAudioAtFileURL:(id)arg1 audioFileFormat:(long long)arg2 modelDomain:(long long)arg3 product:(long long)arg4 localeId:(id)arg5;
- (id)initWithNetworker:(id)arg1 launcherSetProvider:(id)arg2;

@end

