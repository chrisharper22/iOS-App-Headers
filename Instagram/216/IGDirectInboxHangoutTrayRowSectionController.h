//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

#import "IGDirectInboxHangoutTrayRowCellDelegate-Protocol.h"

@class NSString;
@protocol IGDirectInboxHangoutTrayRowSectionControllerDelegate;

@interface IGDirectInboxHangoutTrayRowSectionController : IGListBindingSingleSectionController <IGDirectInboxHangoutTrayRowCellDelegate>
{
    id <IGDirectInboxHangoutTrayRowSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)hangoutTrayRowCell:(id)arg1 didSelectViewModel:(id)arg2;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (Class)cellClass;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

