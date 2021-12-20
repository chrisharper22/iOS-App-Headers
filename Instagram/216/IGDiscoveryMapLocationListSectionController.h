//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGDiscoveryMapLocationListCellDelegate-Protocol.h"
#import "IGDiscoveryMapLocationListPreviewMediaSectionControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGListWorkingRangeDelegate-Protocol.h"

@class IGDiscoveryMapLoggingContext, IGListAdapter, IGLocationManager, IGUserSession, NSString;
@protocol IGDiscoveryMapLocationListSectionControllerDelegate;

@interface IGDiscoveryMapLocationListSectionController : IGListGenericSectionController <IGListAdapterDataSource, IGDiscoveryMapLocationListCellDelegate, IGDiscoveryMapLocationListPreviewMediaSectionControllerDelegate, IGListWorkingRangeDelegate>
{
    IGUserSession *_userSession;
    IGLocationManager *_locationManager;
    IGDiscoveryMapLoggingContext *_loggingContext;
    NSString *_analyticsModule;
    IGListAdapter *_listAdapter;
    _Bool _showPreviewMediasLoadingIndicator;
    id <IGDiscoveryMapLocationListSectionControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDiscoveryMapLocationListSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)previewMediaSectionController:(id)arg1 didTapMapPinPreviewMedia:(id)arg2;
- (void)discoveryMapLocationListCell:(id)arg1 didTapAvatar:(id)arg2;
- (void)discoveryMapLocationListCell:(id)arg1 didTapPreviewMediaIndex:(unsigned long long)arg2;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 locationManager:(id)arg2 loggingContext:(id)arg3 analyticsModule:(id)arg4 showPreviewMediasLoadingIndicator:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

