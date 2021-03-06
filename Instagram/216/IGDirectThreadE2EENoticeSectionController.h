//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

#import "IGDirectCoreTextViewCellDelegate-Protocol.h"

@class IGStyledString, IGUserSession, NSString;

@interface IGDirectThreadE2EENoticeSectionController : IGListBindingSingleSectionController <IGDirectCoreTextViewCellDelegate>
{
    IGUserSession *_userSession;
    IGStyledString *_styledString;
}

- (void).cxx_destruct;
- (void)messageListCellDidTapLink:(id)arg1;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (id)initWithUserSession:(id)arg1;
- (id)_styledStringForViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

