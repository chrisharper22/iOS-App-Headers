//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMemoryCache, IGUserSession;

@interface IGCommentSectionViewModelCache : NSObject
{
    IGUserSession *_userSession;
    IGMemoryCache *_viewModelCache;
}

- (void).cxx_destruct;
- (id)commentSectionViewModelForComment:(id)arg1 shouldBeIndented:(_Bool)arg2 media:(id)arg3 likeButtonPosition:(long long)arg4 likeCountPosition:(long long)arg5 socialContextType:(long long)arg6 analyticsModule:(id)arg7 canShowCheckmarkButton:(_Bool)arg8 showUnhideButton:(_Bool)arg9 hidePinnedAndReplyButton:(_Bool)arg10 limitStatus:(long long)arg11;
- (id)initWithUserSession:(id)arg1;

@end

