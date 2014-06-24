//
//  Seal.h
//  PeevedPenguins
//
//  Created by Ishani Thakur on 6/24/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Seal : CCSprite

- (id)init {
    self = [super init];
    
    if (self) {
        CCLOG(@"Penguin created");
    }
    
    return self;
}

@end
