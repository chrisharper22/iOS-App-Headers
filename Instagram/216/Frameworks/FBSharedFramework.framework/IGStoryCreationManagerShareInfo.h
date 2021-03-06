//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGDirectOutgoingMessageSendAttribution, IGDirectVisualMessageViewModeSelectorModel, NSSet, NSString;

@interface IGStoryCreationManagerShareInfo : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    long long _storyPost_storySendTarget;
    long long _storyPost_externalShareOptions;
    NSString *_storyPost_privateStoryListID;
    NSString *_storyPost_fanClubID;
    NSSet *_directVisualMessage_threadKeys;
    IGDirectVisualMessageViewModeSelectorModel *_directVisualMessage_viewMode;
    long long _directVisualMessage_replyType;
    NSString *_directVisualMessage_replyMessageId;
    IGDirectOutgoingMessageSendAttribution *_directVisualMessage_sendAttribution;
}

+ (id)storyPostWithStorySendTarget:(long long)arg1 externalShareOptions:(long long)arg2 privateStoryListID:(id)arg3 fanClubID:(id)arg4;
+ (id)directVisualMessageWithThreadKeys:(id)arg1 viewMode:(id)arg2 replyType:(long long)arg3 replyMessageId:(id)arg4 sendAttribution:(id)arg5;
- (void).cxx_destruct;
- (void)matchStoryPost:(CDUnknownBlockType)arg1 directVisualMessage:(CDUnknownBlockType)arg2;
- (long long)matchIntegerStoryPost:(CDUnknownBlockType)arg1 directVisualMessage:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanStoryPost:(CDUnknownBlockType)arg1 directVisualMessage:(CDUnknownBlockType)arg2;

@end

