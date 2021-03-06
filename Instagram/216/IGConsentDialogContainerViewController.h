//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BKBloksHostingViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BKContext, BKParseResult, IGConsentDialogContainerView, NSString;

@interface IGConsentDialogContainerViewController : UIViewController <BKBloksHostingViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _dismissibleOnOutsideTap;
    double _widthMargin;
    double _cornerRadius;
    IGConsentDialogContainerView *_dialogView;
    CDUnknownBlockType _outsideTapDismissCallback;
    BKContext *_context;
    BKParseResult *_componentParseResult;
}

- (void).cxx_destruct;
- (void)_dismiss;
- (void)viewDidLoad;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)bloksHostingViewDidInvalidateSize:(struct CGSize)arg1;
- (void)loadView;
- (id)initWithWidthMargin:(double)arg1 dismissibleOnOutsideTap:(_Bool)arg2 cornerRadius:(double)arg3 outsideTapDismissCallback:(CDUnknownBlockType)arg4 componentParseResult:(id)arg5 context:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

