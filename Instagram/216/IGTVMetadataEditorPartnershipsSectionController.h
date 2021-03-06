//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGTVMetadataEditorPartnershipsCellDelegate-Protocol.h"

@class NSString;
@protocol IGTVMetadataEditorPartnershipsSectionControllerDelegate;

@interface IGTVMetadataEditorPartnershipsSectionController : IGListGenericSectionController <IGTVMetadataEditorPartnershipsCellDelegate>
{
    id <IGTVMetadataEditorPartnershipsSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVMetadataEditorPartnershipsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)metadataEditorPartnershipsCellDidToggleSwitchOn:(_Bool)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

