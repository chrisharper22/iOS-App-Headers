//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGStoryViewerReplyToDirectThreadContext;

@interface IGStoryViewerReplyConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGStoryViewerReplyToDirectThreadContext *_replyToDirectThread_directThreadContext;
}

+ (id)replyToDirectThreadWithDirectThreadContext:(id)arg1;
+ (id)replyToAuthor;
+ (id)disabled;
- (void).cxx_destruct;
- (void)matchDisabled:(CDUnknownBlockType)arg1 replyToAuthor:(CDUnknownBlockType)arg2 replyToDirectThread:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanDisabled:(CDUnknownBlockType)arg1 replyToAuthor:(CDUnknownBlockType)arg2 replyToDirectThread:(CDUnknownBlockType)arg3;

@end

