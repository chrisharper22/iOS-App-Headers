//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGProfileExpressingLoveViewDelegate-Protocol.h"

@class IGExpressingLoveStickerConsumptionModel, IGStyledString, IGUserSession, NSString;
@protocol IGProfileExpressingLoveSectionControllerDelegate, IGProfileLayoutMetrics;

@interface IGProfileExpressingLoveSectionController : IGListSectionController <IGProfileExpressingLoveViewDelegate>
{
    id <IGProfileLayoutMetrics> _layoutMetrics;
    IGUserSession *_userSession;
    IGExpressingLoveStickerConsumptionModel *_expressingLoveModel;
    id <IGProfileExpressingLoveSectionControllerDelegate> _delegate;
    IGStyledString *_cellString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGStyledString *cellString; // @synthesize cellString=_cellString;
@property(nonatomic) __weak id <IGProfileExpressingLoveSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)expressingLoveViewDidTapOnNonURL:(id)arg1;
- (void)expressingLoveView:(id)arg1 didTapOnURL:(id)arg2;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithLayoutMetrics:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
