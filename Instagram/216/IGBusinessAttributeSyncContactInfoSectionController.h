//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGBusinessAttributeSyncContactInfoViewModel;
@protocol IGBusinessAttributeSyncContactInfoSectionControllerDelegate;

@interface IGBusinessAttributeSyncContactInfoSectionController : IGListSectionController
{
    IGBusinessAttributeSyncContactInfoViewModel *_contactInfoViewModel;
    long long _flowStep;
    id <IGBusinessAttributeSyncContactInfoSectionControllerDelegate> _businessFlowDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGBusinessAttributeSyncContactInfoSectionControllerDelegate> businessFlowDelegate; // @synthesize businessFlowDelegate=_businessFlowDelegate;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 flowStep:(long long)arg2 dataModel:(id)arg3;

@end
