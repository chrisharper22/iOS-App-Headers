//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGStoryReel.h>

#import "IGGenericSurveyModule-Protocol.h"
#import "IGListDiffable-Protocol.h"

@interface IGStoryReel (IGGenericSurvey) <IGGenericSurveyModule, IGListDiffable>
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)moduleType;
- (_Bool)isTopLevelModule;
@end

