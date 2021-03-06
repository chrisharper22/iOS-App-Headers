//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBIntentTarget-Protocol.h>

@class NSString, NSURL, UIView, UIViewController;
@protocol IGStoryCreationViewControllerNavigationDelegate;

@interface IGUserPayBadgesSupporterThankYouStoryUserIntentTarget : NSObject <FBIntentTarget>
{
    _Bool _useInsightsID;
    UIViewController *_presentingViewController;
    id <IGStoryCreationViewControllerNavigationDelegate> _storyNavigationDelegate;
    NSURL *_profilePicURL;
    long long _numberOfSupporters;
    NSString *_mediaInsightsID;
    NSString *_title;
    double _creationDate;
    NSString *_text;
    UIView *_thankYouStoryButtonView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *thankYouStoryButtonView; // @synthesize thankYouStoryButtonView=_thankYouStoryButtonView;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool useInsightsID; // @synthesize useInsightsID=_useInsightsID;
@property(readonly, nonatomic) NSString *mediaInsightsID; // @synthesize mediaInsightsID=_mediaInsightsID;
@property(readonly, nonatomic) long long numberOfSupporters; // @synthesize numberOfSupporters=_numberOfSupporters;
@property(readonly, nonatomic) NSURL *profilePicURL; // @synthesize profilePicURL=_profilePicURL;
@property(readonly, nonatomic) id <IGStoryCreationViewControllerNavigationDelegate> storyNavigationDelegate; // @synthesize storyNavigationDelegate=_storyNavigationDelegate;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)initWithPresentingViewController:(id)arg1 storyNavigationDelegate:(id)arg2 profilePicURL:(id)arg3 numberOfSupporters:(long long)arg4 mediaInsightsID:(id)arg5 useInsightsID:(_Bool)arg6 title:(id)arg7 creationDate:(double)arg8 text:(id)arg9 thankYouStoryButtonView:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

