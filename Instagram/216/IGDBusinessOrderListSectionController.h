//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGDBusinessOrdersSectionCellDelegate-Protocol.h"

@class IGUserSession, NSString;
@protocol IGDBusinessOrderListSectionControllerDelegate;

@interface IGDBusinessOrderListSectionController : IGListGenericSectionController <IGDBusinessOrdersSectionCellDelegate>
{
    IGUserSession *_userSession;
    NSString *_consumerId;
    id <IGDBusinessOrderListSectionControllerDelegate> _delegate;
}

+ (id)newWithUserSession:(id)arg1 consumerId:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDBusinessOrderListSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)orderCellDidRecieveTap:(id)arg1 index:(unsigned long long)arg2;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

