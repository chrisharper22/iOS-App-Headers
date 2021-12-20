//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGListAdapter, IGMedia, IGUserSession, NSMutableSet, UIView;

@interface IGCommentSeenStateImpressionTracker : NSObject
{
    NSMutableSet *_viewedImpressions;
    IGMedia *_media;
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    UIView *_navigationBar;
    _Bool _trackingEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool trackingEnabled; // @synthesize trackingEnabled=_trackingEnabled;
- (void)_logImpressionForObject:(id)arg1 module:(id)arg2;
- (struct CGRect)_visibleContentRectWithCommentTextView:(id)arg1;
- (_Bool)hasSeenComment:(id)arg1;
- (void)checkForNewItemWithProvider:(id)arg1 listAdapter:(id)arg2 commentTextView:(id)arg3 module:(id)arg4;
- (id)visibleTrackableObjectsWithProvider:(id)arg1 listAdapter:(id)arg2 commentTextView:(id)arg3;
- (id)initWithListAdapter:(id)arg1 userSession:(id)arg2 media:(id)arg3 navigationBar:(id)arg4;

@end

