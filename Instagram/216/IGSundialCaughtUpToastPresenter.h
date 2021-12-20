//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGActionableConfirmationToastPresenter, IGActionableConfirmationToastViewModel;
@protocol IGSundialCaughtUpToastPresenterDelegate;

@interface IGSundialCaughtUpToastPresenter : NSObject
{
    id <IGSundialCaughtUpToastPresenterDelegate> _delegate;
    IGActionableConfirmationToastPresenter *_toastPresenter;
    IGActionableConfirmationToastViewModel *_toastViewModel;
    _Bool _disableToastPresentation;
}

- (void).cxx_destruct;
- (void)resetToastEligiblity;
- (void)presentToastIfEligible;
- (id)initWithDelegate:(id)arg1;

@end

