//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGBusinessConversionActivityFeedViewDelegate-Protocol.h"

@class IG4BLogger, IGUserSession, NSString;
@protocol IGActivityBusinessConversionTopSectionControllerDelegate, IGBusinessConversionActivityFeedViewDelegate;

@interface IGActivityBusinessConversionTopSectionController : IGListSectionController <IGBusinessConversionActivityFeedViewDelegate>
{
    NSString *_module;
    id <IGActivityBusinessConversionTopSectionControllerDelegate> _delegate;
    IGUserSession *_userSession;
    id <IGBusinessConversionActivityFeedViewDelegate> _activityFeedDelegate;
    NSString *_reminderText;
    IG4BLogger *_ig4bLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IG4BLogger *ig4bLogger; // @synthesize ig4bLogger=_ig4bLogger;
@property(readonly, nonatomic) NSString *reminderText; // @synthesize reminderText=_reminderText;
@property(nonatomic) __weak id <IGBusinessConversionActivityFeedViewDelegate> activityFeedDelegate; // @synthesize activityFeedDelegate=_activityFeedDelegate;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)_handleBusinessConversionActivityFeedCancelFailureWithError:(id)arg1;
- (void)_handleBusinessConversionActivityFeedCancelSuccess;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)businessConversionActivityFeedView:(id)arg1 didTapContinueButton:(id)arg2;
- (void)businessConversionActivityFeedView:(id)arg1 didTapCancelButton:(id)arg2;
- (id)_createLoggerFromUserSession:(id)arg1;
- (id)initWithUserSession:(id)arg1 reminderText:(id)arg2 module:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
