//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

@class IGUserSession;

@interface IGTVSeriesDescriptionSectionController : IGListGenericSectionController
{
    IGUserSession *_userSession;
    _Bool _isExpanded;
}

- (void).cxx_destruct;
- (id)_visibleCell;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1;

@end

