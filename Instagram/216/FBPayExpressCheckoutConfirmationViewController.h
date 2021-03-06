//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBPayExpressCheckoutBaseViewController.h"

#import "FBPayCoreTextViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBPayActionButtonView, FBPayCoreTextView, FBPayExpressCheckoutConfirmationConfiguration, NSString, UIImageView, UILabel, UITableView;
@protocol FBPayExpressCheckoutConfirmationViewControllerDelegate, FBPayUPLLoggingAPI;

@interface FBPayExpressCheckoutConfirmationViewController : FBPayExpressCheckoutBaseViewController <UITableViewDelegate, UITableViewDataSource, FBPayCoreTextViewDelegate>
{
    FBPayExpressCheckoutConfirmationConfiguration *_confirmationConfiguration;
    UIImageView *_checkmarkCircleImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    FBPayCoreTextView *_receiptCoreTextView;
    FBPayCoreTextView *_pinCoreTextView;
    UITableView *_upsellTableView;
    FBPayActionButtonView *_actionButtonView;
    NSString *_receiptURL;
    NSString *_pinURL;
    NSString *_productId;
    id <FBPayUPLLoggingAPI> _logger;
    id <FBPayExpressCheckoutConfirmationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBPayExpressCheckoutConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)_constraintsForActionButtonView;
- (id)_constraintsForUpsellTableView;
- (id)_constraintsForPinCoreTextView;
- (id)_constraintsForReceiptCoreTextView;
- (id)_constraintsForSubtitleLabel;
- (id)_constraintsForTitleLabel;
- (id)_constraintsForCheckmarkCircleImageView;
- (void)_setupConstraints;
- (double)totalViewHeight;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_setupViews;
- (void)_logLoadConfirmationFailEvent;
- (void)_logLoadConfirmationSuccessEvent;
- (void)_logLoadConfirmationInitEvent;
- (id)initWithConfirmationConfiguration:(id)arg1 navigationBarConfig:(id)arg2 productId:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

