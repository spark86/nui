//
//  NUIStyleSheetItem.h
//  NUI
//
//  Created by Tony Mann on 1/14/14.
//  Copyright (c) 2014 Tom Benner. All rights reserved.
//

#if __has_include(<NUIParse/NUIParse.h>)
#    import <NUIParse/NUIParse.h>
#else
#    import "NUIParse.h"
#endif

@class NUIRuleSet, NUIDefinition, NUIMediaBlock;

@interface NUIStyleSheetItem : NSObject<NUIPParseResult>

@property (strong) NSArray *ruleSets;
@property (strong) NSArray *definitions;

@end
