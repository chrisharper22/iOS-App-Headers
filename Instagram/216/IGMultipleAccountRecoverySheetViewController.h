//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGGestureHandler-Protocol.h"

@class IGMultipleAccountRecoverySheetView, IGOmniLookupUser, NSString;

@interface IGMultipleAccountRecoverySheetViewController : UIViewController <IGGestureHandler>
{
    IGOmniLookupUser *_user;
    IGMultipleAccountRecoverySheetView *_sheetView;
}

- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
