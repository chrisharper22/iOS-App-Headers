//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGVideoCallSourceIdentifier : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_roomSourceIdentifier_roomURL;
    NSString *_videoCallSourceIdentifier_threadID;
}

+ (id)videoCallSourceIdentifierWithThreadID:(id)arg1;
+ (id)roomSourceIdentifierWithRoomURL:(id)arg1;
- (void).cxx_destruct;
- (void)matchRoomSourceIdentifier:(CDUnknownBlockType)arg1 videoCallSourceIdentifier:(CDUnknownBlockType)arg2;

@end
