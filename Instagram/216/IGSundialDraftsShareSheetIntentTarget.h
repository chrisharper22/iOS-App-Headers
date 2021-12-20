//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class IGSundialComposition, NSString, UIImage;
@protocol IGSundialDraftsShareSheetViewControllerDelegate;

@interface IGSundialDraftsShareSheetIntentTarget : NSObject <FBIntentTarget>
{
    IGSundialComposition *_draftComposition;
    id <IGSundialDraftsShareSheetViewControllerDelegate> _delegate;
    UIImage *_previewImage;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) id <IGSundialDraftsShareSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGSundialComposition *draftComposition; // @synthesize draftComposition=_draftComposition;
- (id)initWithDraftComposition:(id)arg1 delegate:(id)arg2 previewImage:(id)arg3 analyticsModule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
