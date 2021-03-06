//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStyledString, IGUser, IGUserSession, NSArray, NSDictionary, NSString;

@interface IGTVVideoCreatorViewModel : NSObject
{
    _Bool _showFollowButton;
    _Bool _showInternalBadge;
    IGUser *_user;
    IGStyledString *_detailText;
    IGStyledString *_usernameAttributionText;
    IGUserSession *_currentUserSession;
    NSString *_currentAnalyticModule;
    NSString *_mediaPK;
    NSDictionary *_followLoggingExtras;
    NSArray *_collaborators;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *collaborators; // @synthesize collaborators=_collaborators;
@property(readonly, nonatomic) NSDictionary *followLoggingExtras; // @synthesize followLoggingExtras=_followLoggingExtras;
@property(readonly, nonatomic) NSString *mediaPK; // @synthesize mediaPK=_mediaPK;
@property(readonly, nonatomic) NSString *currentAnalyticModule; // @synthesize currentAnalyticModule=_currentAnalyticModule;
@property(readonly, nonatomic) IGUserSession *currentUserSession; // @synthesize currentUserSession=_currentUserSession;
@property(readonly, nonatomic) _Bool showInternalBadge; // @synthesize showInternalBadge=_showInternalBadge;
@property(readonly, nonatomic) _Bool showFollowButton; // @synthesize showFollowButton=_showFollowButton;
@property(readonly, nonatomic) IGStyledString *usernameAttributionText; // @synthesize usernameAttributionText=_usernameAttributionText;
@property(readonly, nonatomic) IGStyledString *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (id)initWithUser:(id)arg1 detailText:(id)arg2 usernameAttributionText:(id)arg3 showFollowButton:(_Bool)arg4 showInternalBadge:(_Bool)arg5 currentUserSession:(id)arg6 currentAnalyticModule:(id)arg7 mediaPK:(id)arg8 followLoggingExtras:(id)arg9 collaborators:(id)arg10;

@end

