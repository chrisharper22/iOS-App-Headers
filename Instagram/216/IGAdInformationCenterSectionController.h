//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "BKBloksViewHelperDelegate-Protocol.h"

@class BKBloksViewHelper, IGAdInformationCenterBloksCell, IGUserSession;

@interface IGAdInformationCenterSectionController : IGListGenericSectionController <BKBloksViewHelperDelegate>
{
    IGUserSession *_userSession;
    BKBloksViewHelper *_bloksViewHelper;
    IGAdInformationCenterBloksCell *_bloksCell;
}

- (void).cxx_destruct;
- (void)bloksViewHelperNeedsUpdate:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

