//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGLiveAudioStateChange : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _newAudioState_audioEnabled;
}

+ (id)none;
+ (id)newAudioStateWithAudioEnabled:(_Bool)arg1;
- (void)matchNone:(CDUnknownBlockType)arg1 newAudioState:(CDUnknownBlockType)arg2;

@end
