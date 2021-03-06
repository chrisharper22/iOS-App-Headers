//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FBSharedFramework/IGAnalyticsModule-Protocol.h>
#import <FBSharedFramework/IGPhotoLibraryPrimingViewDelegate-Protocol.h>

@class IGPhotoLibraryPrimingView, NSString;

@interface IGPhotoLibraryPrimingViewController : UIViewController <IGPhotoLibraryPrimingViewDelegate, IGAnalyticsModule>
{
    IGPhotoLibraryPrimingView *_primingView;
    _Bool _updatedPrimingEnabled;
    _Bool _gallerySuggestionsPrimingEnabled;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)photoLibraryPrimingViewDidTapDismissButton:(id)arg1;
- (void)photoLibraryPrimingViewDidTapContinueButton:(id)arg1;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUpdatedPriming:(_Bool)arg1 gallerySuggestionsPrimingEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

