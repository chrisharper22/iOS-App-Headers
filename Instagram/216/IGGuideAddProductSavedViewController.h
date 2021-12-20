//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTaggingSearchViewControllerDelegate-Protocol.h"

@class IGProductTaggingSearchViewController, IGUserSession, NSString;
@protocol IGGuideAddProductSavedViewControllerDelegate;

@interface IGGuideAddProductSavedViewController : IGViewController <IGTaggingSearchViewControllerDelegate>
{
    IGUserSession *_userSession;
    IGProductTaggingSearchViewController *_productPickerViewController;
    id <IGGuideAddProductSavedViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGuideAddProductSavedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)taggingSearchViewController:(id)arg1 didSelectFBUser:(id)arg2 IGUserResultShown:(id)arg3 searchingString:(id)arg4;
- (void)taggingSearchViewController:(id)arg1 didSelectProductItems:(id)arg2 productSelectionBehavior:(id)arg3;
- (void)taggingSearchViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)taggingSearchViewController:(id)arg1 didSelectProductCollection:(id)arg2;
- (void)taggingSearchViewControllerDidCancel:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
